
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_key_auth {struct key* dest_keyring; } ;
struct key {int sem; int flags; } ;
struct cred {int jit_keyring; struct key* session_keyring; struct key* process_keyring; struct key* thread_keyring; struct key* request_key_auth; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 struct cred* FUNC_1 () ;
 int FUNC_2 (int *) ;
 struct request_key_auth* FUNC_3 (struct key*) ;
 int FUNC_4 (char*,struct key*) ;
 struct key* FUNC_5 (struct key*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct key*) ;
 int FUNC_8 (struct key*) ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (struct key**,struct key**) ;
 int FUNC_11 (struct key*,int) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(struct key **VAR_2)
{
 struct request_key_auth *VAR_3;
 const struct cred *VAR_4 = FUNC_1();
 struct key *VAR_5 = *VAR_2, *VAR_6;
 int VAR_7;

 FUNC_4("%p", VAR_5);


 if (VAR_5) {

  FUNC_5(VAR_5);
 } else {
  bool VAR_8 = 1;



  switch (VAR_4->jit_keyring) {
  case 135:
  case 132:
   if (VAR_4->request_key_auth) {
    VAR_6 = VAR_4->request_key_auth;
    FUNC_2(&VAR_6->sem);
    VAR_3 = FUNC_3(VAR_6);
    if (!FUNC_12(VAR_0,
           &VAR_6->flags))
     VAR_5 =
      FUNC_5(VAR_3->dest_keyring);
    FUNC_13(&VAR_6->sem);
    if (VAR_5) {
     VAR_8 = 0;
     break;
    }
   }


  case 130:
   VAR_5 = FUNC_5(VAR_4->thread_keyring);
   if (VAR_5)
    break;


  case 133:
   VAR_5 = FUNC_5(VAR_4->process_keyring);
   if (VAR_5)
    break;


  case 131:
   VAR_5 = FUNC_5(VAR_4->session_keyring);

   if (VAR_5)
    break;


  case 128:
   VAR_7 = FUNC_10(((void*)0), &VAR_5);
   if (VAR_7 < 0)
    return VAR_7;
   break;

  case 129:
   VAR_7 = FUNC_10(&VAR_5, ((void*)0));
   if (VAR_7 < 0)
    return VAR_7;
   break;

  case 134:
  default:
   FUNC_0();
  }
  if (VAR_5 && VAR_8) {
   VAR_7 = FUNC_6(FUNC_11(VAR_5, 1),
          VAR_1);
   if (VAR_7) {
    FUNC_7(VAR_5);
    return VAR_7;
   }
  }
 }

 *VAR_2 = VAR_5;
 FUNC_9(" [dk %d]", FUNC_8(VAR_5));
 return 0;
}
