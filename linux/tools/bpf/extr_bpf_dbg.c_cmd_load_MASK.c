
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (char*) ;
 char* FUNC_8 (char*,char*,char**) ;

__attribute__((used)) static int FUNC_9(char *VAR_2)
{
 char *VAR_3, *VAR_4 = ((void*)0), *VAR_5 = FUNC_7(VAR_2);
 int VAR_6 = VAR_1;

 VAR_3 = FUNC_8(VAR_5, " ", &VAR_4);
 if (VAR_3 == ((void*)0))
  goto out;
 if (FUNC_5(VAR_3, "bpf") == 0) {
  FUNC_0();
  FUNC_1();

  if (!VAR_4)
   VAR_6 = VAR_0;
  else
   VAR_6 = FUNC_2(VAR_4);
 } else if (FUNC_5(VAR_3, "pcap") == 0) {
  VAR_6 = FUNC_3(VAR_4);
 } else {
out:
  FUNC_6("bpf <code>:  load bpf code\n");
  FUNC_6("pcap <file>: load pcap file\n");
  VAR_6 = VAR_0;
 }

 FUNC_4(VAR_5);
 return VAR_6;
}
