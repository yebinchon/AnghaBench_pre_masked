
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nci_dev {int req_status; int req_result; int req_completion; } ;
typedef int __u32 ;


 long VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,long) ;
 int FUNC_2 (char*,long) ;
 int FUNC_3 (int *) ;
 long FUNC_4 (int *,int ) ;

__attribute__((used)) static int FUNC_5(struct nci_dev *VAR_2,
    void (*VAR_3)(struct nci_dev *VAR_4, unsigned long VAR_5),
    unsigned long VAR_6, __u32 VAR_7)
{
 int VAR_8 = 0;
 long VAR_9;

 VAR_2->req_status = VAR_1;

 FUNC_3(&VAR_2->req_completion);
 VAR_3(VAR_2, VAR_6);
 VAR_9 =
  FUNC_4(&VAR_2->req_completion,
         VAR_7);

 FUNC_1("wait_for_completion return %ld\n", VAR_9);

 if (VAR_9 > 0) {
  switch (VAR_2->req_status) {
  case 128:
   VAR_8 = FUNC_0(VAR_2->req_result);
   break;

  case 129:
   VAR_8 = -VAR_2->req_result;
   break;

  default:
   VAR_8 = -VAR_0;
   break;
  }
 } else {
  FUNC_2("wait_for_completion_interruptible_timeout failed %ld\n",
         VAR_9);

  VAR_8 = ((VAR_9 == 0) ? (-VAR_0) : (VAR_9));
 }

 VAR_2->req_status = VAR_2->req_result = 0;

 return VAR_8;
}
