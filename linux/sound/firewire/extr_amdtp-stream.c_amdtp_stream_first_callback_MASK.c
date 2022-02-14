
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int (* sc ) (struct fw_iso_context*,int ,size_t,void*,struct amdtp_stream*) ;} ;
struct fw_iso_context {TYPE_1__ callback; } ;
struct amdtp_stream {int callbacked; scalar_t__ direction; int start_cycle; int callback_wait; } ;
typedef int __be32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int const) ;
 int FUNC_1 (int const) ;
 int FUNC_2 (struct fw_iso_context*,int ,size_t,void*,struct amdtp_stream*) ;
 int FUNC_3 (struct fw_iso_context*,int ,size_t,void*,struct amdtp_stream*) ;
 int FUNC_4 (struct fw_iso_context*,int ,size_t,void*,struct amdtp_stream*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct fw_iso_context *VAR_1,
     u32 VAR_2, size_t VAR_3,
     void *VAR_4, void *VAR_5)
{
 struct amdtp_stream *VAR_6 = VAR_5;
 const __be32 *VAR_7 = VAR_4;
 u32 VAR_8;





 VAR_6->callbacked = 1;
 FUNC_5(&VAR_6->callback_wait);

 if (VAR_6->direction == VAR_0) {
  VAR_8 = FUNC_0(VAR_7[1]);

  VAR_1->callback.sc = FUNC_2;
 } else {
  VAR_8 = FUNC_1(*VAR_7);

  VAR_1->callback.sc = FUNC_3;
 }

 VAR_6->start_cycle = VAR_8;

 VAR_1->callback.sc(VAR_1, VAR_2, VAR_3, VAR_4, VAR_6);
}
