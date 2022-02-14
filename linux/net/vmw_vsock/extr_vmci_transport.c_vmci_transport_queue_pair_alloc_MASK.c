
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct vmci_qp {int dummy; } ;
struct vmci_handle {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct vmci_qp**,struct vmci_handle*,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int
FUNC_3(struct vmci_qp **VAR_3,
    struct vmci_handle *VAR_4,
    u64 VAR_5,
    u64 VAR_6,
    u32 VAR_7, u32 VAR_8, bool VAR_9)
{
 int VAR_10 = 0;

 if (VAR_9) {




  VAR_10 = FUNC_1(VAR_3, VAR_4, VAR_5,
           VAR_6,
           VAR_7, VAR_8,
           VAR_2);
  if (VAR_10 != VAR_0)
   goto out;

 }

 VAR_10 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6,
          VAR_7, VAR_8, VAR_1);
out:
 if (VAR_10 < 0) {
  FUNC_0("Could not attach to queue pair with %d\n",
         VAR_10);
  VAR_10 = FUNC_2(VAR_10);
 }

 return VAR_10;
}
