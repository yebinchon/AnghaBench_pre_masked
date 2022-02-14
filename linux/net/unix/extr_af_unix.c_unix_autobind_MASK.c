
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct unix_sock {int bindlock; int addr; } ;
struct unix_address {size_t hash; scalar_t__ len; TYPE_1__* name; int refcnt; } ;
struct socket {int type; struct sock* sk; } ;
struct sock {size_t sk_type; } ;
struct net {int dummy; } ;
struct TYPE_3__ {scalar_t__ sun_path; int sun_family; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct net*,TYPE_1__*,scalar_t__,int ,size_t) ;
 int FUNC_1 (int *,struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__*,scalar_t__,int ) ;
 int FUNC_5 (struct unix_address*) ;
 struct unix_address* FUNC_6 (int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,struct unix_address*) ;
 struct net* FUNC_11 (struct sock*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (scalar_t__,char*,int) ;
 size_t FUNC_15 (int ) ;
 struct unix_sock* FUNC_16 (struct sock*) ;
 int * VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_17(struct socket *VAR_6)
{
 struct sock *VAR_7 = VAR_6->sk;
 struct net *VAR_8 = FUNC_11(VAR_7);
 struct unix_sock *VAR_9 = FUNC_16(VAR_7);
 static u32 VAR_10 = 1;
 struct unix_address *VAR_11;
 int VAR_12;
 unsigned int VAR_13 = 0;

 VAR_12 = FUNC_7(&VAR_9->bindlock);
 if (VAR_12)
  return VAR_12;

 VAR_12 = 0;
 if (VAR_9->addr)
  goto out;

 VAR_12 = -VAR_1;
 VAR_11 = FUNC_6(sizeof(*VAR_11) + sizeof(short) + 16, VAR_3);
 if (!VAR_11)
  goto out;

 VAR_11->name->sun_family = VAR_0;
 FUNC_9(&VAR_11->refcnt, 1);

retry:
 VAR_11->len = FUNC_14(VAR_11->name->sun_path+1, "%05x", VAR_10) + 1 + sizeof(short);
 VAR_11->hash = FUNC_15(FUNC_4(VAR_11->name, VAR_11->len, 0));

 FUNC_12(&VAR_5);
 VAR_10 = (VAR_10+1)&0xFFFFF;

 if (FUNC_0(VAR_8, VAR_11->name, VAR_11->len, VAR_6->type,
          VAR_11->hash)) {
  FUNC_13(&VAR_5);




  FUNC_3();

  if (VAR_13++ == 0xFFFFF) {
   VAR_12 = -VAR_2;
   FUNC_5(VAR_11);
   goto out;
  }
  goto retry;
 }
 VAR_11->hash ^= VAR_7->sk_type;

 FUNC_2(VAR_7);
 FUNC_10(&VAR_9->addr, VAR_11);
 FUNC_1(&VAR_4[VAR_11->hash], VAR_7);
 FUNC_13(&VAR_5);
 VAR_12 = 0;

out: FUNC_8(&VAR_9->bindlock);
 return VAR_12;
}
