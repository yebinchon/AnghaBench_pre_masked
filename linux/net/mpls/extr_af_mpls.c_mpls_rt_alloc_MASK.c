
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mpls_route {int rt_nhn; int rt_nhn_alive; int rt_nh_size; int rt_via_offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mpls_route* FUNC_0 (int ) ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 struct mpls_route* FUNC_3 (size_t,int ) ;

__attribute__((used)) static struct mpls_route *FUNC_4(u8 VAR_4, u8 VAR_5, u8 VAR_6)
{
 u8 VAR_7 = FUNC_1(VAR_6, VAR_5);
 struct mpls_route *VAR_8;
 size_t VAR_9;

 VAR_9 = sizeof(*VAR_8) + VAR_4 * VAR_7;
 if (VAR_9 > VAR_3)
  return FUNC_0(-VAR_0);

 VAR_8 = FUNC_3(VAR_9, VAR_2);
 if (!VAR_8)
  return FUNC_0(-VAR_1);

 VAR_8->rt_nhn = VAR_4;
 VAR_8->rt_nhn_alive = VAR_4;
 VAR_8->rt_nh_size = VAR_7;
 VAR_8->rt_via_offset = FUNC_2(VAR_6);

 return VAR_8;
}
