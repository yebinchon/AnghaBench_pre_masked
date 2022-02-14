
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ftl_stream {int sent_headers; } ;
typedef int int64_t ;


 int FUNC_0 (struct ftl_stream*,int ) ;

__attribute__((used)) static inline bool FUNC_1(struct ftl_stream *VAR_0, int64_t VAR_1)
{
 VAR_0->sent_headers = 1;

 if (!FUNC_0(VAR_0, VAR_1))
  return 0;

 return 1;
}
