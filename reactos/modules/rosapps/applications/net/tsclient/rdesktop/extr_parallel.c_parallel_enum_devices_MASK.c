
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32 ;
struct TYPE_5__ {TYPE_1__* rdpdr_device; } ;
struct TYPE_4__ {scalar_t__ handle; void* pdevice_data; int device_type; scalar_t__ local_path; scalar_t__ name; } ;
typedef TYPE_2__ RDPCLIENT ;
typedef int PARALLEL_DEVICE ;


 int VAR_0 ;
 size_t VAR_1 ;
 char* FUNC_0 (char*,char) ;
 int FUNC_1 (char*,char*,char*) ;
 int FUNC_2 (scalar_t__,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int) ;

int
FUNC_6(RDPCLIENT * VAR_2, uint32 * VAR_3, char *VAR_4)
{
 PARALLEL_DEVICE *VAR_5;

 char *VAR_6 = VAR_4;
 char *VAR_7;
 int VAR_8 = 0;


 VAR_4++;
 while ((VAR_6 = FUNC_0(VAR_4, ',')) && *VAR_3 < VAR_1)
 {
  VAR_5 = (PARALLEL_DEVICE *) FUNC_5(sizeof(PARALLEL_DEVICE));

  VAR_7 = FUNC_0(VAR_4, '=');
  FUNC_2(VAR_2->rdpdr_device[*VAR_3].name, VAR_4);

  FUNC_4(VAR_2->rdpdr_device[*VAR_3].name);

  VAR_2->rdpdr_device[*VAR_3].local_path = FUNC_5(FUNC_3(VAR_7) + 1);
  FUNC_2(VAR_2->rdpdr_device[*VAR_3].local_path, VAR_7);
  FUNC_1("PARALLEL %s to %s\n", VAR_4, VAR_7);


  VAR_2->rdpdr_device[*VAR_3].device_type = VAR_0;
  VAR_2->rdpdr_device[*VAR_3].pdevice_data = (void *) VAR_5;
  VAR_2->rdpdr_device[*VAR_3].handle = 0;
  VAR_8++;
  (*VAR_3)++;

  VAR_4 = VAR_6;
 }
 return VAR_8;
}
