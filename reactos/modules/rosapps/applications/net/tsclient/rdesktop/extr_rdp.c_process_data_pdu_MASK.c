
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8 ;
typedef scalar_t__ uint32 ;
typedef int uint16 ;
struct stream {int* p; int* data; int size; int* end; int* rdp_hdr; } ;
struct TYPE_9__ {scalar_t__ hist; struct stream ns; } ;
struct TYPE_10__ {int disconnect_reason; TYPE_1__ mppc_dict; } ;
typedef struct stream* STREAM ;
typedef TYPE_2__ RDPCLIENT ;
typedef int BOOL ;


 int FUNC_0 (char*) ;
 int VAR_0 ;







 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct stream*,int) ;
 int FUNC_4 (struct stream*,int) ;
 int FUNC_5 (struct stream*,int) ;
 int FUNC_6 (int*,unsigned char*,scalar_t__) ;
 int FUNC_7 (TYPE_2__*,int*,int,int,scalar_t__*,scalar_t__*) ;
 int FUNC_8 (struct stream*,scalar_t__*) ;
 int FUNC_9 (TYPE_2__*,struct stream*) ;
 int FUNC_10 (TYPE_2__*,struct stream*) ;
 void* FUNC_11 (int*,scalar_t__) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (char*,int) ;

__attribute__((used)) static BOOL
FUNC_14(RDPCLIENT * VAR_4, STREAM VAR_5, uint32 * VAR_6)
{
 uint8 VAR_7;
 uint8 VAR_8;
 uint16 VAR_9;
 uint32 VAR_10;

 uint32 VAR_11, VAR_12;

 struct stream *VAR_13 = &(VAR_4->mppc_dict.ns);

 FUNC_5(VAR_5, 6);
 FUNC_3(VAR_5, VAR_10);
 FUNC_4(VAR_5, VAR_7);
 FUNC_4(VAR_5, VAR_8);
 FUNC_3(VAR_5, VAR_9);
 VAR_9 -= 18;

 if (VAR_8 & VAR_1)
 {
  void * VAR_14;

  if (VAR_10 > VAR_2)
   FUNC_1("error decompressed packet size exceeds max\n");
  if (FUNC_7(VAR_4, VAR_5->p, VAR_9, VAR_8, &VAR_11, &VAR_12) == -1)
   FUNC_1("error while decompressing packet\n");




  VAR_14 = FUNC_11(VAR_13->data, VAR_12);

  if(VAR_14 == ((void*)0))
  {
   VAR_4->disconnect_reason = 262;
   return VAR_3;
  }

  VAR_13->data = (uint8 *) VAR_14;

  FUNC_6((VAR_13->data), (unsigned char *) (VAR_4->mppc_dict.hist + VAR_11), VAR_12);

  VAR_13->size = VAR_12;
  VAR_13->end = (VAR_13->data + VAR_13->size);
  VAR_13->p = VAR_13->data;
  VAR_13->rdp_hdr = VAR_13->p;

  VAR_5 = VAR_13;
 }

 switch (VAR_7)
 {
  case 128:
   FUNC_10(VAR_4, VAR_5);
   break;

  case 133:
   FUNC_0(("Received Control PDU\n"));
   break;

  case 129:
   FUNC_0(("Received Sync PDU\n"));
   break;

  case 130:
   FUNC_9(VAR_4, VAR_5);
   break;

  case 134:
   FUNC_12(VAR_4);
   break;

  case 131:
   FUNC_0(("Received Logon PDU\n"));
   FUNC_2(VAR_4);

   break;

  case 132:
   FUNC_8(VAR_5, VAR_6);






   break;

  default:
   FUNC_13("data PDU %d\n", VAR_7);
 }
 return VAR_0;
}
