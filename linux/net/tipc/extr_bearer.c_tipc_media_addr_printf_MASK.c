
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tipc_media_addr {int * value; int media_id; } ;
struct tipc_media {int name; int (* addr2str ) (struct tipc_media_addr*,char*,int) ;} ;
typedef int addr_str ;


 int VAR_0 ;
 struct tipc_media* FUNC_0 (int ) ;
 int FUNC_1 (char*,int,char*,int ,...) ;
 int FUNC_2 (struct tipc_media_addr*,char*,int) ;

int FUNC_3(char *VAR_1, int VAR_2, struct tipc_media_addr *VAR_3)
{
 char VAR_4[VAR_0];
 struct tipc_media *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_0(VAR_3->media_id);

 if (VAR_5 && !VAR_5->addr2str(VAR_3, VAR_4, sizeof(VAR_4)))
  VAR_6 = FUNC_1(VAR_1, VAR_2, "%s(%s)", VAR_5->name, VAR_4);
 else {
  u32 VAR_7;

  VAR_6 = FUNC_1(VAR_1, VAR_2, "UNKNOWN(%u)", VAR_3->media_id);
  for (VAR_7 = 0; VAR_7 < sizeof(VAR_3->value); VAR_7++)
   VAR_6 += FUNC_1(VAR_1 + VAR_6, VAR_2 - VAR_6,
         "-%x", VAR_3->value[VAR_7]);
 }
 return VAR_6;
}
