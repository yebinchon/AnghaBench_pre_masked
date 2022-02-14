
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ sint8 ;
typedef int sint16 ;
typedef int STREAM ;
typedef scalar_t__ RD_BOOL ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(STREAM VAR_0, sint16 * VAR_1, RD_BOOL VAR_2)
{
 sint8 VAR_3;

 if (VAR_2)
 {
  FUNC_1(VAR_0, VAR_3);
  *VAR_1 += VAR_3;
 }
 else
 {
  FUNC_0(VAR_0, *VAR_1);
 }
}
