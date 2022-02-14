
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct page {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,unsigned int) ;
 char* FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;

__attribute__((used)) static u32 FUNC_4(u32 VAR_0, struct page *VAR_1,
    unsigned int VAR_2,
    unsigned int VAR_3)
{
 char *VAR_4;

 VAR_4 = FUNC_2(VAR_1);
 FUNC_0(VAR_4 == ((void*)0));
 VAR_0 = FUNC_1(VAR_0, VAR_4 + VAR_2, VAR_3);
 FUNC_3(VAR_1);

 return VAR_0;
}
