
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8 ;
typedef scalar_t__ uint32 ;
typedef int uint16 ;
struct stream {int* p; int* data; int size; int* end; int* rdp_hdr; } ;
struct TYPE_2__ {scalar_t__ hist; struct stream ns; } ;
typedef struct stream* STREAM ;
typedef int RD_BOOL ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*) ;
 TYPE_1__ VAR_3 ;
 int FUNC_2 (struct stream*,int) ;
 int FUNC_3 (struct stream*,int) ;
 int FUNC_4 (struct stream*,int) ;
 int FUNC_5 (int*,unsigned char*,scalar_t__) ;
 int FUNC_6 (int*,int,int,scalar_t__*,scalar_t__*) ;
 int FUNC_7 (struct stream*,scalar_t__*) ;
 int FUNC_8 (struct stream*) ;
 int FUNC_9 (struct stream*) ;
 int FUNC_10 (struct stream*) ;
 int FUNC_11 () ;
 int FUNC_12 (char*,int) ;
 int FUNC_13 (char*) ;
 scalar_t__ FUNC_14 (int*,scalar_t__) ;

__attribute__((used)) static RD_BOOL
FUNC_15(STREAM VAR_4, uint32 * VAR_5)
{
 uint8 VAR_6;
 uint8 VAR_7;
 uint16 VAR_8;
 uint32 VAR_9;

 uint32 VAR_10, VAR_11;

 struct stream *VAR_12 = &(VAR_3.ns);

 FUNC_4(VAR_4, 6);
 FUNC_2(VAR_4, VAR_9);
 FUNC_3(VAR_4, VAR_6);
 FUNC_3(VAR_4, VAR_7);
 FUNC_2(VAR_4, VAR_8);
 VAR_8 -= 18;

 if (VAR_7 & VAR_1)
 {
  if (VAR_9 > VAR_2)
   FUNC_1("error decompressed packet size exceeds max\n");
  if (FUNC_6(VAR_4->p, VAR_8, VAR_7, &VAR_10, &VAR_11) == -1)
   FUNC_1("error while decompressing packet\n");




  VAR_12->data = (uint8 *) FUNC_14(VAR_12->data, VAR_11);

  FUNC_5((VAR_12->data), (unsigned char *) (VAR_3.hist + VAR_10), VAR_11);

  VAR_12->size = VAR_11;
  VAR_12->end = (VAR_12->data + VAR_12->size);
  VAR_12->p = VAR_12->data;
  VAR_12->rdp_hdr = VAR_12->p;

  VAR_4 = VAR_12;
 }

 switch (VAR_6)
 {
  case 128:
   FUNC_10(VAR_4);
   break;

  case 133:
   FUNC_0(("Received Control PDU\n"));
   break;

  case 129:
   FUNC_0(("Received Sync PDU\n"));
   break;

  case 130:
   FUNC_9(VAR_4);
   break;

  case 134:
   FUNC_11();
   break;

  case 131:
   FUNC_0(("Received Logon PDU\n"));

   FUNC_8(VAR_4);
   break;

  case 132:
   FUNC_7(VAR_4, VAR_5);






   break;

  case 135:
   FUNC_13("Automatic reconnect using cookie, failed.\n");
   break;

  default:
   FUNC_12("data PDU %d\n", VAR_6);
 }
 return VAR_0;
}
