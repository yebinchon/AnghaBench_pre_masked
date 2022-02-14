
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; } ;
typedef TYPE_1__ LargeObjectDesc ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__** VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (TYPE_1__*,char*,int) ;

int
FUNC_4(int VAR_6, char *VAR_7, int VAR_8)
{
 int VAR_9;
 LargeObjectDesc *VAR_10;

 if (VAR_6 < 0 || VAR_6 >= VAR_5 || VAR_4[VAR_6] == ((void*)0))
  FUNC_0(VAR_2,
    (FUNC_1(VAR_1),
     FUNC_2("invalid large-object descriptor: %d", VAR_6)));
 VAR_10 = VAR_4[VAR_6];






 if ((VAR_10->flags & VAR_3) == 0)
  FUNC_0(VAR_2,
    (FUNC_1(VAR_0),
     FUNC_2("large object descriptor %d was not opened for reading",
      VAR_6)));

 VAR_9 = FUNC_3(VAR_10, VAR_7, VAR_8);

 return VAR_9;
}
