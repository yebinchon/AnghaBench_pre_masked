
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint32 ;
struct TYPE_7__ {char* printer; void* printer_fp; } ;
struct TYPE_6__ {TYPE_1__* rdpdr_device; } ;
struct TYPE_5__ {int handle; scalar_t__ pdevice_data; } ;
typedef TYPE_2__ RDPCLIENT ;
typedef TYPE_3__ PRINTER ;
typedef int NTSTATUS ;
typedef int NTHANDLE ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*,char*) ;

__attribute__((used)) static NTSTATUS
FUNC_3(RDPCLIENT * VAR_1, uint32 VAR_2, uint32 VAR_3, uint32 VAR_4, uint32 VAR_5, uint32 VAR_6,
        char *VAR_7, NTHANDLE * VAR_8)
{
 char VAR_9[256];
 PRINTER *VAR_10;

 VAR_10 = (PRINTER *) VAR_1->rdpdr_device[VAR_2].pdevice_data;


 if (VAR_10->printer == "mydeskjet")
 {
  VAR_10->printer_fp = FUNC_1("lpr", "w");
 }
 else
 {
  FUNC_2(VAR_9, "lpr -P %s", VAR_10->printer);
  VAR_10->printer_fp = FUNC_1(VAR_9, "w");
 }

 VAR_1->rdpdr_device[VAR_2].handle = FUNC_0(VAR_10->printer_fp);
 *VAR_8 = VAR_1->rdpdr_device[VAR_2].handle;
 return VAR_0;
}
