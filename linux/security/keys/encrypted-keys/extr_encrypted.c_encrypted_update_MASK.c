
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct key_preparsed_payload {size_t datalen; char* data; } ;
struct TYPE_2__ {struct encrypted_key_payload** data; } ;
struct key {TYPE_1__ payload; } ;
struct encrypted_key_payload {char* iv; char* payload_data; size_t payload_datalen; int rcu; int datalen; int format; int master_desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct encrypted_key_payload*) ;
 int FUNC_1 (struct encrypted_key_payload*) ;
 int FUNC_2 (struct encrypted_key_payload*,int ,char*,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (char*,char const**,char**,int *,int *) ;
 struct encrypted_key_payload* FUNC_5 (struct key*,int ,char*,int ) ;
 int VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ FUNC_6 (struct key*) ;
 char* FUNC_7 (size_t,int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,char*,size_t) ;
 int FUNC_10 (struct key*,struct encrypted_key_payload*) ;
 int FUNC_11 (char*,int ) ;

__attribute__((used)) static int FUNC_12(struct key *VAR_6, struct key_preparsed_payload *VAR_7)
{
 struct encrypted_key_payload *VAR_8 = VAR_6->payload.data[0];
 struct encrypted_key_payload *VAR_9;
 char *VAR_10;
 char *VAR_11 = ((void*)0);
 const char *VAR_12 = ((void*)0);
 size_t VAR_13 = VAR_7->datalen;
 int VAR_14 = 0;

 if (FUNC_6(VAR_6))
  return -VAR_1;
 if (VAR_13 <= 0 || VAR_13 > 32767 || !VAR_7->data)
  return -VAR_0;

 VAR_10 = FUNC_7(VAR_13 + 1, VAR_3);
 if (!VAR_10)
  return -VAR_2;

 VAR_10[VAR_13] = 0;
 FUNC_9(VAR_10, VAR_7->data, VAR_13);
 VAR_14 = FUNC_4(VAR_10, &VAR_12, &VAR_11, ((void*)0), ((void*)0));
 if (VAR_14 < 0)
  goto out;

 VAR_14 = FUNC_11(VAR_11, VAR_8->master_desc);
 if (VAR_14 < 0)
  goto out;

 VAR_9 = FUNC_5(VAR_6, VAR_8->format,
        VAR_11, VAR_8->datalen);
 if (FUNC_0(VAR_9)) {
  VAR_14 = FUNC_1(VAR_9);
  goto out;
 }

 FUNC_2(VAR_9, VAR_8->format, VAR_11,
      VAR_8->datalen);

 FUNC_9(VAR_9->iv, VAR_8->iv, VAR_5);
 FUNC_9(VAR_9->payload_data, VAR_8->payload_data,
        VAR_8->payload_datalen);

 FUNC_10(VAR_6, VAR_9);
 FUNC_3(&VAR_8->rcu, VAR_4);
out:
 FUNC_8(VAR_10);
 return VAR_14;
}
