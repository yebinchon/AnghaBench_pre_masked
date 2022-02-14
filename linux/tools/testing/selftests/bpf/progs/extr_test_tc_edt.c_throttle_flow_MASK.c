
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct __sk_buff {scalar_t__ tstamp; scalar_t__ len; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__* FUNC_1 (int *,int*) ;
 scalar_t__ FUNC_2 (int *,int*,scalar_t__*,int ) ;
 int FUNC_3 (struct __sk_buff*) ;
 int VAR_8 ;

__attribute__((used)) static inline int FUNC_4(struct __sk_buff *VAR_9)
{
 int VAR_10 = 0;
 uint64_t *VAR_11 = FUNC_1(&VAR_8, &VAR_10);
 uint64_t VAR_12 = ((uint64_t)VAR_9->len) * VAR_3 /
   VAR_6;
 uint64_t VAR_13 = FUNC_0();
 uint64_t VAR_14, VAR_15 = 0;

 if (VAR_11)
  VAR_15 = *VAR_11 + VAR_12;

 VAR_14 = VAR_9->tstamp;
 if (VAR_14 < VAR_13)
  VAR_14 = VAR_13;


 if (VAR_15 <= VAR_14) {
  if (FUNC_2(&VAR_8, &VAR_10, &VAR_14, VAR_0))
   return VAR_5;
  return VAR_4;
 }


 if (VAR_15 - VAR_13 >= VAR_7)
  return VAR_5;


 if (VAR_15 - VAR_13 >= VAR_2)
  FUNC_3(VAR_9);

 if (FUNC_2(&VAR_8, &VAR_10, &VAR_15, VAR_1))
  return VAR_5;
 VAR_9->tstamp = VAR_15;

 return VAR_4;
}
