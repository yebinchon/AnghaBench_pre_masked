
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct nlattr {int dummy; } ;
struct nf_conn {int status; scalar_t__ timeout; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct nlattr const* const) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct nf_conn *VAR_6,
        const struct nlattr * const VAR_7[])
{
 u64 VAR_8 = (u64)FUNC_1(FUNC_0(VAR_7[VAR_0])) * VAR_2;

 if (VAR_8 > VAR_3)
  VAR_8 = VAR_3;
 VAR_6->timeout = VAR_5 + (u32)VAR_8;

 if (FUNC_2(VAR_4, &VAR_6->status))
  return -VAR_1;

 return 0;
}
