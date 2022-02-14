
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct idr {int idr_next; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct idr*,void*,int*,int,int ) ;

int FUNC_1(struct idr *VAR_2, void *VAR_3, int VAR_4, int VAR_5, gfp_t VAR_6)
{
 u32 VAR_7 = VAR_2->idr_next;
 int VAR_8, VAR_9 = VAR_5 > 0 ? VAR_5 - 1 : VAR_1;

 if ((int)VAR_7 < VAR_4)
  VAR_7 = VAR_4;

 VAR_8 = FUNC_0(VAR_2, VAR_3, &VAR_7, VAR_9, VAR_6);
 if ((VAR_8 == -VAR_0) && (VAR_7 > VAR_4)) {
  VAR_7 = VAR_4;
  VAR_8 = FUNC_0(VAR_2, VAR_3, &VAR_7, VAR_9, VAR_6);
 }
 if (VAR_8)
  return VAR_8;

 VAR_2->idr_next = VAR_7 + 1;
 return VAR_7;
}
