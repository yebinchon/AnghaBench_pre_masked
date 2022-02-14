
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int time64_t ;
struct user_key_payload {int datalen; int data; } ;
struct net {int dummy; } ;
struct TYPE_2__ {struct key** data; } ;
struct key {int sem; int expiry; TYPE_1__ payload; int perm; int flags; } ;
struct cred {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct key*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct key*) ;
 size_t VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,char*,char const*) ;
 int FUNC_4 (char*,char const*,int,int,char const*,size_t,char const*) ;
 int FUNC_5 (struct key*) ;
 int FUNC_6 (struct key*) ;
 int VAR_7 ;
 int FUNC_7 (struct key*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,int) ;
 char* FUNC_10 (size_t,int ) ;
 char* FUNC_11 (int ,int,int ) ;
 int FUNC_12 (char*,char const*,size_t) ;
 struct cred* FUNC_13 (int ) ;
 struct key* FUNC_14 (int *,char*,struct net*,char const*) ;
 int FUNC_15 (struct cred const*) ;
 int FUNC_16 (int ,int *) ;
 size_t FUNC_17 (char const*) ;
 int FUNC_18 (int *) ;
 struct user_key_payload* FUNC_19 (struct key*) ;

int FUNC_20(struct net *VAR_8,
       const char *VAR_9, const char *VAR_10, size_t VAR_11,
       const char *VAR_12, char **VAR_13, time64_t *VAR_14,
       bool VAR_15)
{
 struct key *VAR_16;
 struct user_key_payload *VAR_17;
 const struct cred *VAR_18;
 size_t VAR_19, VAR_20;
 char *VAR_21, *VAR_22;
 int VAR_23, VAR_24;

 FUNC_4("%s,%*.*s,%zu,%s",
        VAR_9, (int)VAR_11, (int)VAR_11, VAR_10, VAR_11, VAR_12);

 if (!VAR_10 || VAR_11 == 0)
  return -VAR_0;


 VAR_19 = 0;
 VAR_20 = 0;
 if (VAR_9) {
  VAR_19 = FUNC_17(VAR_9);
  if (VAR_19 < 1)
   return -VAR_0;
  VAR_20 += VAR_19 + 1;
 }

 if (VAR_11 < 3 || VAR_11 > 255)
  return -VAR_0;
 VAR_20 += VAR_11 + 1;

 VAR_21 = FUNC_10(VAR_20, VAR_2);
 if (!VAR_21)
  return -VAR_1;

 VAR_22 = VAR_21;
 if (VAR_9) {
  FUNC_12(VAR_22, VAR_9, VAR_19);
  VAR_22 += VAR_19;
  *VAR_22++ = ':';
 }
 FUNC_12(VAR_22, VAR_10, VAR_11);
 VAR_22 += VAR_11;
 *VAR_22 = '\0';

 if (!VAR_12)
  VAR_12 = "";
 FUNC_3("call request_key(,%s,%s)", VAR_21, VAR_12);




 VAR_18 = FUNC_13(VAR_6);
 VAR_16 = FUNC_14(&VAR_7, VAR_21, VAR_8, VAR_12);
 FUNC_15(VAR_18);
 FUNC_8(VAR_21);
 if (FUNC_0(VAR_16)) {
  VAR_23 = FUNC_1(VAR_16);
  goto out;
 }

 FUNC_2(&VAR_16->sem);
 FUNC_16(VAR_3, &VAR_16->flags);
 VAR_16->perm |= VAR_4;

 VAR_23 = FUNC_7(VAR_16);
 if (VAR_23 < 0)
  goto put;


 VAR_23 = FUNC_1(VAR_16->payload.data[VAR_5]);
 if (VAR_23)
  goto put;

 VAR_17 = FUNC_19(VAR_16);
 VAR_24 = VAR_17->datalen;

 if (VAR_13) {
  VAR_23 = -VAR_1;
  *VAR_13 = FUNC_11(VAR_17->data, VAR_24, VAR_2);
  if (!*VAR_13)
   goto put;
 }

 if (VAR_14)
  *VAR_14 = VAR_16->expiry;

 VAR_23 = VAR_24;
put:
 FUNC_18(&VAR_16->sem);
 if (VAR_15)
  FUNC_5(VAR_16);
 FUNC_6(VAR_16);
out:
 FUNC_9(" = %d", VAR_23);
 return VAR_23;
}
