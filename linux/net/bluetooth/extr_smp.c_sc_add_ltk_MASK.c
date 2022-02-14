
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct smp_chan {int enc_key_size; int tk; int ltk; int flags; TYPE_1__* conn; } ;
struct hci_conn {scalar_t__ pending_sec_level; int dst_type; int dst; int hdev; } ;
struct TYPE_2__ {struct hci_conn* hcon; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *,int ,int,int,int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct smp_chan *VAR_4)
{
 struct hci_conn *VAR_5 = VAR_4->conn->hcon;
 u8 VAR_6, VAR_7;

 if (FUNC_1(VAR_1, &VAR_4->flags))
  VAR_6 = VAR_3;
 else
  VAR_6 = VAR_2;

 if (VAR_5->pending_sec_level == VAR_0)
  VAR_7 = 1;
 else
  VAR_7 = 0;

 VAR_4->ltk = FUNC_0(VAR_5->hdev, &VAR_5->dst, VAR_5->dst_type,
          VAR_6, VAR_7, VAR_4->tk, VAR_4->enc_key_size,
          0, 0);
}
