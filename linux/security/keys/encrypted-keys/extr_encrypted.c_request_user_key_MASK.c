
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct user_key_payload {size_t datalen; int * data; } ;
struct key {int sem; } ;


 int VAR_0 ;
 struct key* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct key*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct key*) ;
 int VAR_1 ;
 struct key* FUNC_4 (int *,char const*,int *) ;
 int FUNC_5 (int *) ;
 struct user_key_payload* FUNC_6 (struct key*) ;

__attribute__((used)) static struct key *FUNC_7(const char *VAR_2, const u8 **VAR_3,
        size_t *VAR_4)
{
 const struct user_key_payload *VAR_5;
 struct key *VAR_6;

 VAR_6 = FUNC_4(&VAR_1, VAR_2, ((void*)0));
 if (FUNC_1(VAR_6))
  goto error;

 FUNC_2(&VAR_6->sem);
 VAR_5 = FUNC_6(VAR_6);
 if (!VAR_5) {

  FUNC_5(&VAR_6->sem);
  FUNC_3(VAR_6);
  VAR_6 = FUNC_0(-VAR_0);
  goto error;
 }
 *VAR_3 = VAR_5->data;
 *VAR_4 = VAR_5->datalen;
error:
 return VAR_6;
}
