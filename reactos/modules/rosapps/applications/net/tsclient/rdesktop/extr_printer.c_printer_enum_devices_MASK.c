
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_7__ {char* printer; char* driver; int default_printer; } ;
struct TYPE_6__ {TYPE_1__* rdpdr_device; } ;
struct TYPE_5__ {scalar_t__ device_type; char* name; void* pdevice_data; } ;
typedef TYPE_2__ RDPCLIENT ;
typedef TYPE_3__ PRINTER ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int) ;
 char* FUNC_1 (char*,char) ;
 int FUNC_2 (char*,char*,char*,char*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;
 void* FUNC_6 (int) ;

int
FUNC_7(RDPCLIENT * VAR_4, uint32 * VAR_5, char *VAR_6)
{
 PRINTER *VAR_7;

 char *VAR_8 = VAR_6;
 char *VAR_9;
 int VAR_10 = 0;
 int VAR_11 = 0;



 while (VAR_10 < *VAR_5)
 {
  if (VAR_4->rdpdr_device[VAR_10].device_type == VAR_0)
   VAR_11++;
  VAR_10++;
 }

 VAR_10 = 0;

 if (*VAR_6 == ':')
  VAR_6++;

 while ((VAR_8 = FUNC_1(VAR_6, ',')) && *VAR_5 < VAR_2)
 {
  VAR_7 = (PRINTER *) FUNC_6(sizeof(PRINTER));

  FUNC_4(VAR_4->rdpdr_device[*VAR_5].name, "PRN");
  FUNC_3(VAR_4->rdpdr_device[*VAR_5].name, FUNC_0(VAR_11 + VAR_10 + 1, 10));


  if ((VAR_11 + VAR_10) == 0)
   VAR_7->default_printer = VAR_3;
  else
   VAR_7->default_printer = VAR_1;

  VAR_9 = FUNC_1(VAR_6, '=');
  if (*VAR_6 == (char) 0x00)
   VAR_7->printer = "mydeskjet";
  else
  {
   VAR_7->printer = FUNC_6(FUNC_5(VAR_6) + 1);
   FUNC_4(VAR_7->printer, VAR_6);
  }

  if (!VAR_9 || (*VAR_9 == (char) 0x00))
   VAR_7->driver = "HP Color LaserJet 8500 PS";
  else
  {
   VAR_7->driver = FUNC_6(FUNC_5(VAR_9) + 1);
   FUNC_4(VAR_7->driver, VAR_9);
  }

  FUNC_2("PRINTER %s to %s driver %s\n", VAR_4->rdpdr_device[*VAR_5].name,
         VAR_7->printer, VAR_7->driver);
  VAR_4->rdpdr_device[*VAR_5].device_type = VAR_0;
  VAR_4->rdpdr_device[*VAR_5].pdevice_data = (void *) VAR_7;
  VAR_10++;
  (*VAR_5)++;

  VAR_6 = VAR_8;
 }
 return VAR_10;
}
