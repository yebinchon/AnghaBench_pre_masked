
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtable {int dummy; } ;
struct net {int dummy; } ;
struct flowi4 {scalar_t__ saddr; int flowi4_flags; scalar_t__ daddr; } ;
typedef int fl4 ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,scalar_t__*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct rtable*) ;
 int FUNC_2 (struct rtable*) ;
 int FUNC_3 (struct flowi4*,int ,int ,scalar_t__,scalar_t__) ;
 struct rtable* FUNC_4 (struct net*,struct flowi4*) ;
 int FUNC_5 (struct rtable*) ;
 int FUNC_6 (struct flowi4*,int ,int) ;

__attribute__((used)) static struct rtable *FUNC_7(struct net *VAR_4, __be32 VAR_5,
           int VAR_6, __be32 *VAR_7)
{
 struct flowi4 VAR_8;
 struct rtable *VAR_9;
 bool VAR_10 = 0;

 FUNC_6(&VAR_8, 0, sizeof(VAR_8));
 VAR_8 = VAR_5;
 VAR_8 = (VAR_6 & VAR_3) ?
      VAR_1 : 0;

retry:
 VAR_9 = FUNC_4(VAR_4, &VAR_8);
 if (FUNC_1(VAR_9)) {

  if (FUNC_2(VAR_9) == -VAR_0 && *VAR_7 &&
      VAR_6 & VAR_2 && !VAR_10) {
   *VAR_7 = 0;
   FUNC_3(&VAR_8, 0, 0, VAR_5, 0);
   goto retry;
  }
  FUNC_0("ip_route_output error, dest: %pI4\n", &VAR_5);
  return ((void*)0);
 } else if (!*VAR_7 && VAR_6 & VAR_2 && VAR_8) {
  FUNC_5(VAR_9);
  *VAR_7 = VAR_8;
  FUNC_3(&VAR_8, 0, 0, VAR_5, VAR_8);
  VAR_10 = 1;
  goto retry;
 }
 *VAR_7 = VAR_8;
 return VAR_9;
}
