
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
typedef int __wsum ;


 int FUNC_0 (char*,int,int ) ;
 char* FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;

__attribute__((used)) static inline __wsum
FUNC_3(struct page *VAR_0, int VAR_1, int VAR_2)
{
 char *VAR_3;
 __wsum VAR_4;
 VAR_3 = FUNC_1(VAR_0);
 VAR_4 = FUNC_0(VAR_3 + VAR_1, VAR_2, 0);
 FUNC_2(VAR_0);
 return VAR_4;
}
