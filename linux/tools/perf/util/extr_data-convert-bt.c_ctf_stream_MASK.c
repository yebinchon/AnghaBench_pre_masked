
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctf_writer {struct ctf_stream** stream; } ;
struct ctf_stream {int dummy; } ;


 struct ctf_stream* FUNC_0 (struct ctf_writer*,int) ;

__attribute__((used)) static struct ctf_stream *FUNC_1(struct ctf_writer *VAR_0, int VAR_1)
{
 struct ctf_stream *VAR_2 = VAR_0->stream[VAR_1];

 if (!VAR_2) {
  VAR_2 = FUNC_0(VAR_0, VAR_1);
  VAR_0->stream[VAR_1] = VAR_2;
 }

 return VAR_2;
}
