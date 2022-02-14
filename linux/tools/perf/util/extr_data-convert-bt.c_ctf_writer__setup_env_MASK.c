
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* hostname; char* os_release; char* version; char* arch; } ;
struct perf_header {TYPE_1__ env; } ;
struct perf_session {struct perf_header header; } ;
struct ctf_writer {struct bt_ctf_writer* writer; } ;
struct bt_ctf_writer {int dummy; } ;


 int FUNC_0 (char*,char*) ;

__attribute__((used)) static int FUNC_1(struct ctf_writer *VAR_0,
     struct perf_session *VAR_1)
{
 struct perf_header *VAR_2 = &VAR_1->header;
 struct bt_ctf_writer *VAR_3 = VAR_0->writer;







 do { if (FUNC_0(VAR_3, "host", VAR_2->env.hostname)) return -1; } while (0);
 do { if (FUNC_0(VAR_3, "sysname", "Linux")) return -1; } while (0);
 do { if (FUNC_0(VAR_3, "release", VAR_2->env.os_release)) return -1; } while (0);
 do { if (FUNC_0(VAR_3, "version", VAR_2->env.version)) return -1; } while (0);
 do { if (FUNC_0(VAR_3, "machine", VAR_2->env.arch)) return -1; } while (0);
 do { if (FUNC_0(VAR_3, "domain", "kernel")) return -1; } while (0);
 do { if (FUNC_0(VAR_3, "tracer_name", "perf")) return -1; } while (0);


 return 0;
}
