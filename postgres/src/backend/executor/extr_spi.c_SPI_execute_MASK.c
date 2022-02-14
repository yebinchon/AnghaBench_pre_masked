
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int cursor_options; int magic; } ;
typedef TYPE_1__ _SPI_plan ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int *,int ,int ,int,int,long) ;
 int FUNC_3 (char const*,TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;

int
FUNC_5(const char *VAR_4, bool VAR_5, long VAR_6)
{
 _SPI_plan VAR_7;
 int VAR_8;

 if (VAR_4 == ((void*)0) || VAR_6 < 0)
  return VAR_2;

 VAR_8 = FUNC_0(1);
 if (VAR_8 < 0)
  return VAR_8;

 FUNC_4(&VAR_7, 0, sizeof(_SPI_plan));
 VAR_7.magic = VAR_3;
 VAR_7.cursor_options = VAR_0;

 FUNC_3(VAR_4, &VAR_7);

 VAR_8 = FUNC_2(&VAR_7, ((void*)0),
       VAR_1, VAR_1,
       VAR_5, 1, VAR_6);

 FUNC_1(1);
 return VAR_8;
}
