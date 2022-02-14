
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hci_conn {scalar_t__ enc_key_size; TYPE_1__* hdev; int flags; } ;
struct TYPE_2__ {scalar_t__ min_enc_key_size; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;

__attribute__((used)) static bool FUNC_1(struct hci_conn *VAR_1)
{
 return (!FUNC_0(VAR_0, &VAR_1->flags) ||
  VAR_1->enc_key_size >= VAR_1->hdev->min_enc_key_size);
}
