
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Size ;
typedef int LWLockMinimallyPadded ;
typedef int CkptSortItem ;
typedef int BufferDescPadded ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int) ;

Size
FUNC_3(void)
{
 Size VAR_3 = 0;


 VAR_3 = FUNC_1(VAR_3, FUNC_2(VAR_1, sizeof(BufferDescPadded)));

 VAR_3 = FUNC_1(VAR_3, VAR_2);


 VAR_3 = FUNC_1(VAR_3, FUNC_2(VAR_1, VAR_0));


 VAR_3 = FUNC_1(VAR_3, FUNC_0());
 VAR_3 = FUNC_1(VAR_3, FUNC_2(VAR_1, sizeof(LWLockMinimallyPadded)));

 VAR_3 = FUNC_1(VAR_3, VAR_2);


 VAR_3 = FUNC_1(VAR_3, FUNC_2(VAR_1, sizeof(CkptSortItem)));

 return VAR_3;
}
