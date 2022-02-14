
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udp_media_addr {int dummy; } ;
struct tipc_media_addr {int value; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 char VAR_3 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (char*,int ,int ) ;

__attribute__((used)) static int FUNC_2(char *VAR_4, struct tipc_media_addr *VAR_5)
{
 FUNC_1(VAR_4, 0, VAR_1);
 VAR_4[VAR_2] = VAR_3;
 FUNC_0(VAR_4 + VAR_0, VAR_5->value,
        sizeof(struct udp_media_addr));
 return 0;
}
