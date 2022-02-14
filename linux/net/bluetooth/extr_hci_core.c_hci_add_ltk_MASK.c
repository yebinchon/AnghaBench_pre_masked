
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct smp_ltk {void* type; void* enc_size; int rand; int ediv; void* authenticated; int val; void* bdaddr_type; int bdaddr; int list; } ;
struct hci_dev {int long_term_keys; } ;
typedef int bdaddr_t ;
typedef int __le64 ;
typedef int __le16 ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 struct smp_ltk* FUNC_1 (struct hci_dev*,int *,void*,void*) ;
 struct smp_ltk* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 void* FUNC_4 (void*) ;
 int FUNC_5 (int ,void**,int) ;

struct smp_ltk *FUNC_6(struct hci_dev *VAR_1, bdaddr_t *VAR_2,
       u8 VAR_3, u8 VAR_4, u8 VAR_5,
       u8 VAR_6[16], u8 VAR_7, __le16 VAR_8, __le64 VAR_9)
{
 struct smp_ltk *VAR_10, *VAR_11;
 u8 VAR_12 = FUNC_4(VAR_4);

 VAR_11 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_12);
 if (VAR_11)
  VAR_10 = VAR_11;
 else {
  VAR_10 = FUNC_2(sizeof(*VAR_10), VAR_0);
  if (!VAR_10)
   return ((void*)0);
  FUNC_3(&VAR_10->list, &VAR_1->long_term_keys);
 }

 FUNC_0(&VAR_10->bdaddr, VAR_2);
 VAR_10->bdaddr_type = VAR_3;
 FUNC_5(VAR_10->val, VAR_6, sizeof(VAR_10->val));
 VAR_10->authenticated = VAR_5;
 VAR_10->ediv = VAR_8;
 VAR_10->rand = VAR_9;
 VAR_10->enc_size = VAR_7;
 VAR_10->type = VAR_4;

 return VAR_10;
}
