
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct encrypted_key_payload {char* format; char* master_desc; char* datalen; int * iv; } ;


 int VAR_0 ;
 char* FUNC_0 (char*,int ) ;
 char* FUNC_1 (size_t,int ) ;
 int FUNC_2 (char*,char*,char*,char*,char*) ;

__attribute__((used)) static char *FUNC_3(struct encrypted_key_payload *VAR_1,
        size_t VAR_2)
{
 char *VAR_3, *VAR_4;
 u8 *VAR_5 = VAR_1->iv;
 int VAR_6;
 int VAR_7;

 VAR_3 = FUNC_1(VAR_2 + 1, VAR_0);
 if (!VAR_3)
  goto out;

 VAR_3[VAR_2] = '\0';


 VAR_6 = FUNC_2(VAR_3, "%s %s %s ", VAR_1->format,
        VAR_1->master_desc, VAR_1->datalen);


 VAR_4 = &VAR_3[VAR_6];
 for (VAR_7 = 0; VAR_7 < (VAR_2 - VAR_6) / 2; VAR_7++)
  VAR_4 = FUNC_0(VAR_4, VAR_5[VAR_7]);
out:
 return VAR_3;
}
