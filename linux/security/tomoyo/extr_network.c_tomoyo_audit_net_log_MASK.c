
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct tomoyo_request_info {int dummy; } ;


 int * VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (struct tomoyo_request_info*,char*,char const*,int ,int ,char const*) ;

__attribute__((used)) static int FUNC_1(struct tomoyo_request_info *VAR_2,
    const char *VAR_3, const u8 VAR_4,
    const u8 VAR_5, const char *VAR_6)
{
 return FUNC_0(VAR_2, "network %s %s %s %s\n", VAR_3,
     VAR_0[VAR_4],
     VAR_1[VAR_5], VAR_6);
}
