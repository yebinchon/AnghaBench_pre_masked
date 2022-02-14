
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_conn {scalar_t__ type; scalar_t__ key_type; int pin_length; int enc_key_size; int flags; } ;
typedef int __u8 ;


 int FUNC_0 (char*,struct hci_conn*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_1 (struct hci_conn*,int ,int ) ;
 int FUNC_2 (struct hci_conn*) ;
 int FUNC_3 (struct hci_conn*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct hci_conn*,int ) ;
 scalar_t__ FUNC_6 (int ,int *) ;

int FUNC_7(struct hci_conn *VAR_15, __u8 VAR_16, __u8 VAR_17,
        bool VAR_18)
{
 FUNC_0("hcon %p", VAR_15);

 if (VAR_15->type == VAR_14)
  return FUNC_5(VAR_15, VAR_16);


 if (VAR_16 == VAR_4)
  return 1;



 if (VAR_16 == VAR_2 && !FUNC_3(VAR_15))
  return 1;


 if (!FUNC_6(VAR_5, &VAR_15->flags))
  goto auth;



 if (VAR_15->key_type == VAR_10 &&
     VAR_16 == VAR_0)
  goto encrypt;



 if ((VAR_15->key_type == VAR_9 ||
      VAR_15->key_type == VAR_10) &&
     VAR_16 == VAR_1)
  goto encrypt;



 if ((VAR_15->key_type == VAR_12 ||
      VAR_15->key_type == VAR_13) &&
     (VAR_16 == VAR_3 || VAR_16 == VAR_2))
  goto encrypt;





 if (VAR_15->key_type == VAR_11 &&
     (VAR_16 == VAR_3 || VAR_16 == VAR_2 ||
      VAR_15->pin_length == 16))
  goto encrypt;

auth:
 if (FUNC_6(VAR_8, &VAR_15->flags))
  return 0;

 if (VAR_18)
  FUNC_4(VAR_6, &VAR_15->flags);

 if (!FUNC_1(VAR_15, VAR_16, VAR_17))
  return 0;

encrypt:
 if (FUNC_6(VAR_7, &VAR_15->flags)) {



  if (!VAR_15->enc_key_size)
   return 0;


  return 1;
 }

 FUNC_2(VAR_15);
 return 0;
}
