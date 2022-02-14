
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct l2tp_tunnel {scalar_t__ encap; } ;
struct l2tp_session {int peer_session_id; scalar_t__ l2specific_type; int ns; int name; scalar_t__ send_seq; int cookie_len; int * cookie; struct l2tp_tunnel* tunnel; } ;
typedef int __be32 ;
typedef int __be16 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct l2tp_session*,int ,char*,int ,int) ;
 int FUNC_3 (char*,int *,int ) ;

__attribute__((used)) static int FUNC_4(struct l2tp_session *VAR_4, void *VAR_5)
{
 struct l2tp_tunnel *VAR_6 = VAR_4->tunnel;
 char *VAR_7 = VAR_5;
 char *VAR_8 = VAR_7;




 if (VAR_6->encap == VAR_0) {
  u16 VAR_9 = VAR_1;
  *((__be16 *) VAR_7) = FUNC_1(VAR_9);
  VAR_7 += 2;
  *((__be16 *) VAR_7) = 0;
  VAR_7 += 2;
 }

 *((__be32 *) VAR_7) = FUNC_0(VAR_4->peer_session_id);
 VAR_7 += 4;
 if (VAR_4->cookie_len) {
  FUNC_3(VAR_7, &VAR_4->cookie[0], VAR_4->cookie_len);
  VAR_7 += VAR_4->cookie_len;
 }
 if (VAR_4->l2specific_type == VAR_2) {
  u32 VAR_10 = 0;

  if (VAR_4->send_seq) {
   VAR_10 = 0x40000000 | VAR_4->ns;
   VAR_4->ns++;
   VAR_4->ns &= 0xffffff;
   FUNC_2(VAR_4, VAR_3,
     "%s: updated ns to %u\n",
     VAR_4->name, VAR_4->ns);
  }

  *((__be32 *)VAR_7) = FUNC_0(VAR_10);
  VAR_7 += 4;
 }

 return VAR_7 - VAR_8;
}
