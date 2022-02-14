
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ntodelete; int ntoinsert; } ;
typedef TYPE_1__ gistxlogPageUpdate ;
typedef int XLogRecPtr ;
typedef int OffsetNumber ;
typedef scalar_t__ IndexTuple ;
typedef int Buffer ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int,int ,int ) ;
 int FUNC_6 (char*,int) ;

XLogRecPtr
FUNC_7(Buffer VAR_3,
      OffsetNumber *VAR_4, int VAR_5,
      IndexTuple *VAR_6, int VAR_7,
      Buffer VAR_8)
{
 gistxlogPageUpdate VAR_9;
 int VAR_10;
 XLogRecPtr VAR_11;

 VAR_9.ntodelete = VAR_5;
 VAR_9.ntoinsert = VAR_7;

 FUNC_2();
 FUNC_6((char *) &VAR_9, sizeof(gistxlogPageUpdate));

 FUNC_5(0, VAR_3, VAR_0);
 FUNC_4(0, (char *) VAR_4, sizeof(OffsetNumber) * VAR_5);


 for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++)
  FUNC_4(0, (char *) (VAR_6[VAR_10]), FUNC_1(VAR_6[VAR_10]));





 if (FUNC_0(VAR_8))
  FUNC_5(1, VAR_8, VAR_0);

 VAR_11 = FUNC_3(VAR_1, VAR_2);

 return VAR_11;
}
