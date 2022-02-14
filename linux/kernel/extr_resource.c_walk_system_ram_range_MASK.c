
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct resource {int end; int start; } ;
typedef int resource_size_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long FUNC_0 (int) ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (int,int,unsigned long,int ,int,struct resource*) ;
 int FUNC_3 (unsigned long,unsigned long,void*) ;

int FUNC_4(unsigned long VAR_5, unsigned long VAR_6,
     void *VAR_7, int (*VAR_8)(unsigned long, unsigned long, void *))
{
 resource_size_t VAR_9, VAR_10;
 unsigned long VAR_11;
 struct resource VAR_12;
 unsigned long VAR_13, VAR_14;
 int VAR_15 = -VAR_0;

 VAR_9 = (u64) VAR_5 << VAR_4;
 VAR_10 = ((u64)(VAR_5 + VAR_6) << VAR_4) - 1;
 VAR_11 = VAR_2 | VAR_1;
 while (VAR_9 < VAR_10 &&
        !FUNC_2(VAR_9, VAR_10, VAR_11, VAR_3,
        0, &VAR_12)) {
  VAR_13 = FUNC_1(VAR_12.start);
  VAR_14 = FUNC_0(VAR_12.end + 1);
  if (VAR_14 > VAR_13)
   VAR_15 = (*VAR_8)(VAR_13, VAR_14 - VAR_13, VAR_7);
  if (VAR_15)
   break;
  VAR_9 = VAR_12.end + 1;
 }
 return VAR_15;
}
