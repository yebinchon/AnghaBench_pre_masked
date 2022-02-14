
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct hsr_priv {int announce_count; scalar_t__ prot_version; int announce_timer; } ;
struct hsr_port {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct hsr_priv* FUNC_0 (struct hsr_priv*,struct timer_list*,int ) ;
 struct hsr_port* FUNC_1 (struct hsr_priv*,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int *,scalar_t__) ;
 unsigned long FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (struct hsr_port*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct timer_list *VAR_7)
{
 struct hsr_priv *VAR_8;
 struct hsr_port *VAR_9;
 unsigned long VAR_10;

 VAR_8 = FUNC_0(VAR_8, VAR_7, VAR_5);

 FUNC_5();
 VAR_9 = FUNC_1(VAR_8, VAR_2);

 if (VAR_8->announce_count < 3 && VAR_8->prot_version == 0) {
  FUNC_7(VAR_9, VAR_3,
        VAR_8->prot_version);
  VAR_8->announce_count++;

  VAR_10 = FUNC_4(VAR_0);
 } else {
  FUNC_7(VAR_9, VAR_4,
        VAR_8->prot_version);

  VAR_10 = FUNC_4(VAR_1);
 }

 if (FUNC_2(VAR_9->dev))
  FUNC_3(&VAR_8->announce_timer, VAR_6 + VAR_10);

 FUNC_6();
}
