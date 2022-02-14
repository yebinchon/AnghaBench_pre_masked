
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int table ;
struct ip6_srh_t {scalar_t__ flags; scalar_t__ tag; int hdrlen; } ;
struct __sk_buff {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct __sk_buff*,int ,void*,int) ;
 struct ip6_srh_t* FUNC_2 (struct __sk_buff*) ;

int FUNC_3(struct __sk_buff *VAR_3)
{
 struct ip6_srh_t *VAR_4 = FUNC_2(VAR_3);
 int VAR_5 = 117;
 int VAR_6;

 if (VAR_4 == ((void*)0))
  return VAR_0;

 if (VAR_4->flags != 0)
  return VAR_0;

 if (VAR_4->tag != FUNC_0(2442))
  return VAR_0;

 if (VAR_4->hdrlen != 8)
  return VAR_0;

 VAR_6 = FUNC_1(VAR_3, VAR_2,
      (void *)&VAR_5, sizeof(VAR_5));

 if (VAR_6)
  return VAR_0;

 return VAR_1;
}
