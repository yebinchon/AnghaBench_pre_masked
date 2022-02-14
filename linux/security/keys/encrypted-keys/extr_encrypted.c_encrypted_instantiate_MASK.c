
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key_preparsed_payload {size_t datalen; int data; } ;
struct key {int description; } ;
typedef char encrypted_key_payload ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char const**,char**,char**,char**) ;
 int FUNC_3 (char*,int ,char const*,char*,char*,char*) ;
 char* FUNC_4 (struct key*,char const*,char*,char*) ;
 char* FUNC_5 (size_t,int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,int ,size_t) ;
 int FUNC_8 (struct key*,char*) ;

__attribute__((used)) static int FUNC_9(struct key *VAR_3,
     struct key_preparsed_payload *VAR_4)
{
 struct encrypted_key_payload *VAR_5 = ((void*)0);
 char *VAR_6 = ((void*)0);
 const char *VAR_7 = ((void*)0);
 char *VAR_8 = ((void*)0);
 char *VAR_9 = ((void*)0);
 char *VAR_10 = ((void*)0);
 size_t VAR_11 = VAR_4->datalen;
 int VAR_12;

 if (VAR_11 <= 0 || VAR_11 > 32767 || !VAR_4->data)
  return -VAR_0;

 VAR_6 = FUNC_5(VAR_11 + 1, VAR_2);
 if (!VAR_6)
  return -VAR_1;
 VAR_6[VAR_11] = 0;
 FUNC_7(VAR_6, VAR_4->data, VAR_11);
 VAR_12 = FUNC_2(VAR_6, &VAR_7, &VAR_8,
        &VAR_9, &VAR_10);
 if (VAR_12 < 0)
  goto out;

 VAR_5 = FUNC_4(VAR_3, VAR_7, VAR_8,
           VAR_9);
 if (FUNC_0(VAR_5)) {
  VAR_12 = FUNC_1(VAR_5);
  goto out;
 }
 VAR_12 = FUNC_3(VAR_5, VAR_3->description, VAR_7, VAR_8,
        VAR_9, VAR_10);
 if (VAR_12 < 0) {
  FUNC_6(VAR_5);
  goto out;
 }

 FUNC_8(VAR_3, VAR_5);
out:
 FUNC_6(VAR_6);
 return VAR_12;
}
