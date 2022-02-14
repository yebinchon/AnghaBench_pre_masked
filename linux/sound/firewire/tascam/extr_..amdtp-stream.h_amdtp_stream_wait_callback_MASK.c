
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amdtp_stream {int callbacked; int callback_wait; } ;


 int FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (int ,int,int ) ;

__attribute__((used)) static inline bool FUNC_2(struct amdtp_stream *VAR_0,
           unsigned int VAR_1)
{
 return FUNC_1(VAR_0->callback_wait,
      VAR_0->callbacked == 1,
      FUNC_0(VAR_1)) > 0;
}
