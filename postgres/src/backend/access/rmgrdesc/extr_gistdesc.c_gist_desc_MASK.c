
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int gistxlogPageUpdate ;
typedef int gistxlogPageSplit ;
typedef int gistxlogPageReuse ;
typedef int gistxlogPageDelete ;
typedef int gistxlogDelete ;
typedef int XLogReaderState ;
typedef int StringInfo ;







 int VAR_0 ;
 char* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int *) ;

void
FUNC_7(StringInfo VAR_1, XLogReaderState *VAR_2)
{
 char *VAR_3 = FUNC_0(VAR_2);
 uint8 VAR_4 = FUNC_1(VAR_2) & ~VAR_0;

 switch (VAR_4)
 {
  case 128:
   FUNC_6(VAR_1, (gistxlogPageUpdate *) VAR_3);
   break;
  case 130:
   FUNC_4(VAR_1, (gistxlogPageReuse *) VAR_3);
   break;
  case 132:
   FUNC_2(VAR_1, (gistxlogDelete *) VAR_3);
   break;
  case 129:
   FUNC_5(VAR_1, (gistxlogPageSplit *) VAR_3);
   break;
  case 131:
   FUNC_3(VAR_1, (gistxlogPageDelete *) VAR_3);
   break;
 }
}
