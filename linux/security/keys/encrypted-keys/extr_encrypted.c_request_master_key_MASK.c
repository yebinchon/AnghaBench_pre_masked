
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct key {int dummy; } ;
struct encrypted_key_payload {scalar_t__ master_desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct key* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct key*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (struct key*) ;
 int FUNC_3 (int const*,size_t) ;
 int FUNC_4 (char*,scalar_t__) ;
 struct key* FUNC_5 (scalar_t__,int const**,size_t*) ;
 struct key* FUNC_6 (scalar_t__,int const**,size_t*) ;
 int FUNC_7 (scalar_t__,int ,scalar_t__) ;

__attribute__((used)) static struct key *FUNC_8(struct encrypted_key_payload *VAR_6,
          const u8 **VAR_7, size_t *VAR_8)
{
 struct key *VAR_9 = FUNC_0(-VAR_0);

 if (!FUNC_7(VAR_6->master_desc, VAR_2,
       VAR_3)) {
  VAR_9 = FUNC_5(VAR_6->master_desc +
        VAR_3,
        VAR_7, VAR_8);
 } else if (!FUNC_7(VAR_6->master_desc, VAR_4,
       VAR_5)) {
  VAR_9 = FUNC_6(VAR_6->master_desc +
     VAR_5,
     VAR_7, VAR_8);
 } else
  goto out;

 if (FUNC_1(VAR_9)) {
  int VAR_10 = FUNC_2(VAR_9);

  if (VAR_10 == -VAR_1)
   FUNC_4("encrypted_key: key %s not supported",
    VAR_6->master_desc);
  else
   FUNC_4("encrypted_key: key %s not found",
    VAR_6->master_desc);
  goto out;
 }

 FUNC_3(*VAR_7, *VAR_8);
out:
 return VAR_9;
}
