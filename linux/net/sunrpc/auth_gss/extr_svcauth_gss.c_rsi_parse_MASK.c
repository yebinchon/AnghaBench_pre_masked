
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct TYPE_2__ {scalar_t__ expiry_time; scalar_t__ flags; } ;
struct rsi {TYPE_1__ h; int out_token; int out_handle; void* minor_status; void* major_status; int in_token; int in_handle; } ;
struct cache_detail {int dummy; } ;
typedef int rsii ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,struct cache_detail*) ;
 scalar_t__ FUNC_1 (int *,char*,int) ;
 scalar_t__ FUNC_2 (char**) ;
 int FUNC_3 (struct rsi*,int ,int) ;
 int FUNC_4 (char**,char*,int) ;
 int FUNC_5 (struct rsi*) ;
 struct rsi* FUNC_6 (struct cache_detail*,struct rsi*) ;
 struct rsi* FUNC_7 (struct cache_detail*,struct rsi*,struct rsi*) ;
 void* FUNC_8 (char*,char**,int) ;

__attribute__((used)) static int FUNC_9(struct cache_detail *VAR_2,
      char *VAR_3, int VAR_4)
{

 char *VAR_5 = VAR_3;
 char *VAR_6;
 int VAR_7;
 struct rsi VAR_8, *VAR_9 = ((void*)0);
 time_t VAR_10;
 int VAR_11 = -VAR_0;

 FUNC_3(&VAR_8, 0, sizeof(VAR_8));

 VAR_7 = FUNC_4(&VAR_3, VAR_5, VAR_4);
 if (VAR_7 < 0)
  goto out;
 VAR_11 = -VAR_1;
 if (FUNC_1(&VAR_8.in_handle, VAR_5, VAR_7))
  goto out;


 VAR_7 = FUNC_4(&VAR_3, VAR_5, VAR_4);
 VAR_11 = -VAR_0;
 if (VAR_7 < 0)
  goto out;
 VAR_11 = -VAR_1;
 if (FUNC_1(&VAR_8.in_token, VAR_5, VAR_7))
  goto out;

 VAR_9 = FUNC_6(VAR_2, &VAR_8);
 if (!VAR_9)
  goto out;

 VAR_8.h.flags = 0;

 VAR_10 = FUNC_2(&VAR_3);
 VAR_11 = -VAR_0;
 if (VAR_10 == 0)
  goto out;


 VAR_7 = FUNC_4(&VAR_3, VAR_5, VAR_4);
 if (VAR_7 <= 0)
  goto out;
 VAR_8.major_status = FUNC_8(VAR_5, &VAR_6, 10);
 if (*VAR_6)
  goto out;
 VAR_7 = FUNC_4(&VAR_3, VAR_5, VAR_4);
 if (VAR_7 <= 0)
  goto out;
 VAR_8.minor_status = FUNC_8(VAR_5, &VAR_6, 10);
 if (*VAR_6)
  goto out;


 VAR_7 = FUNC_4(&VAR_3, VAR_5, VAR_4);
 if (VAR_7 < 0)
  goto out;
 VAR_11 = -VAR_1;
 if (FUNC_1(&VAR_8.out_handle, VAR_5, VAR_7))
  goto out;


 VAR_7 = FUNC_4(&VAR_3, VAR_5, VAR_4);
 VAR_11 = -VAR_0;
 if (VAR_7 < 0)
  goto out;
 VAR_11 = -VAR_1;
 if (FUNC_1(&VAR_8.out_token, VAR_5, VAR_7))
  goto out;
 VAR_8.h.expiry_time = VAR_10;
 VAR_9 = FUNC_7(VAR_2, &VAR_8, VAR_9);
 VAR_11 = 0;
out:
 FUNC_5(&VAR_8);
 if (VAR_9)
  FUNC_0(&VAR_9->h, VAR_2);
 else
  VAR_11 = -VAR_1;
 return VAR_11;
}
