
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_stream {scalar_t__ incnt; int in; } ;
typedef int gfp_t ;
typedef scalar_t__ __u16 ;


 int FUNC_0 (int *,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_1(struct sctp_stream *VAR_0, __u16 VAR_1,
    gfp_t VAR_2)
{
 int VAR_3;

 if (VAR_1 <= VAR_0->incnt)
  return 0;

 VAR_3 = FUNC_0(&VAR_0->in, VAR_1, VAR_2);
 if (VAR_3)
  return VAR_3;

 VAR_0->incnt = VAR_1;
 return 0;
}
