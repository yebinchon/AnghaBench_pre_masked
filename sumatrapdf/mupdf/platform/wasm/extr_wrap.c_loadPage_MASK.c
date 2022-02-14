
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fz_document ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int *,int) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_2(fz_document *VAR_2, int VAR_3)
{
 static fz_document *VAR_4 = ((void*)0);
 static int VAR_5 = -1;
 if (VAR_5 != VAR_3 || VAR_4 != VAR_2)
 {
  if (VAR_1)
   FUNC_0(VAR_0, VAR_1);
  VAR_1 = FUNC_1(VAR_0, VAR_2, VAR_3-1);
  VAR_4 = VAR_2;
  VAR_5 = VAR_3;
 }
}
