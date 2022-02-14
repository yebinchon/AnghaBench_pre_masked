
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
typedef enum ttu_flags { ____Placeholder_ttu_flags } ttu_flags ;


 scalar_t__ FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int,struct page*) ;
 int FUNC_3 (struct page*,int) ;

__attribute__((used)) static void FUNC_4(struct page *VAR_5)
{
 enum ttu_flags VAR_6 = VAR_1 | VAR_0 |
  VAR_2 | VAR_4;
 bool VAR_7;

 FUNC_2(!FUNC_1(VAR_5), VAR_5);

 if (FUNC_0(VAR_5))
  VAR_6 |= VAR_3;

 VAR_7 = FUNC_3(VAR_5, VAR_6);
 FUNC_2(!VAR_7, VAR_5);
}
