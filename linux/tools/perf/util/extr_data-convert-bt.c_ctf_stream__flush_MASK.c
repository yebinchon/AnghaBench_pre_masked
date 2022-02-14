
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctf_stream {scalar_t__ count; int cpu; int stream; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,scalar_t__) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static int FUNC_3(struct ctf_stream *VAR_0)
{
 int VAR_1 = 0;

 if (VAR_0) {
  VAR_1 = FUNC_0(VAR_0->stream);
  if (VAR_1)
   FUNC_2("CTF stream %d flush failed\n", VAR_0->cpu);

  FUNC_1("Flush stream for cpu %d (%u samples)\n",
     VAR_0->cpu, VAR_0->count);

  VAR_0->count = 0;
 }

 return VAR_1;
}
