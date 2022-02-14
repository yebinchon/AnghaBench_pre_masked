
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key {long serial; } ;
struct cred {struct key* session_keyring; int gid; int uid; } ;


 long VAR_0 ;
 long VAR_1 ;
 scalar_t__ FUNC_0 (struct key*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 long FUNC_1 (struct key*) ;
 int FUNC_2 (struct cred*) ;
 long FUNC_3 (struct cred*) ;
 struct cred* FUNC_4 () ;
 struct key* FUNC_5 (char const*,int) ;
 long FUNC_6 (struct cred*,struct key*) ;
 int FUNC_7 (struct key*) ;
 int VAR_7 ;
 struct key* FUNC_8 (char const*,int ,int ,struct cred const*,int,int ,int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 struct cred* FUNC_11 () ;

long FUNC_12(const char *VAR_8)
{
 const struct cred *VAR_9;
 struct cred *VAR_10;
 struct key *VAR_11;
 long VAR_12, VAR_13;

 VAR_10 = FUNC_11();
 if (!VAR_10)
  return -VAR_1;
 VAR_9 = FUNC_4();


 if (!VAR_8) {
  VAR_12 = FUNC_6(VAR_10, ((void*)0));
  if (VAR_12 < 0)
   goto error;

  VAR_13 = VAR_10->session_keyring->serial;
  VAR_12 = FUNC_3(VAR_10);
  if (VAR_12 == 0)
   VAR_12 = VAR_13;
  goto okay;
 }


 FUNC_9(&VAR_7);


 VAR_11 = FUNC_5(VAR_8, 0);
 if (FUNC_1(VAR_11) == -VAR_0) {

  VAR_11 = FUNC_8(
   VAR_8, VAR_9->uid, VAR_9->gid, VAR_9,
   VAR_3 | VAR_6 | VAR_5 | VAR_4,
   VAR_2, ((void*)0), ((void*)0));
  if (FUNC_0(VAR_11)) {
   VAR_12 = FUNC_1(VAR_11);
   goto error2;
  }
 } else if (FUNC_0(VAR_11)) {
  VAR_12 = FUNC_1(VAR_11);
  goto error2;
 } else if (VAR_11 == VAR_10->session_keyring) {
  VAR_12 = 0;
  goto error3;
 }


 VAR_12 = FUNC_6(VAR_10, VAR_11);
 if (VAR_12 < 0)
  goto error3;

 FUNC_3(VAR_10);
 FUNC_10(&VAR_7);

 VAR_12 = VAR_11->serial;
 FUNC_7(VAR_11);
okay:
 return VAR_12;

error3:
 FUNC_7(VAR_11);
error2:
 FUNC_10(&VAR_7);
error:
 FUNC_2(VAR_10);
 return VAR_12;
}
