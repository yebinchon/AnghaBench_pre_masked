
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct packet_info {int field_count; struct packet_field* fields; } ;
struct packet_field {int flags; size_t offset; char** value_names; int width; char* name; } ;
struct TYPE_2__ {size_t tcode; } ;
struct link_packet {TYPE_1__ common; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,int) ;
 unsigned long long FUNC_1 (struct link_packet*,int,int) ;
 struct packet_info* VAR_1 ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void
FUNC_3(struct link_packet *VAR_2, size_t VAR_3,
     int VAR_4, int VAR_5)
{
 const struct packet_info *VAR_6;
 int VAR_7 = 0;
 int VAR_8;

 VAR_6 = &VAR_1[VAR_2->common.tcode];

 for (VAR_8 = 0; VAR_8 < VAR_6->field_count; VAR_8++) {
  const struct packet_field *VAR_9 = &VAR_6->fields[VAR_8];
  int VAR_10;

  if (VAR_9->flags & VAR_5)
   continue;
  if (VAR_4 && !(VAR_9->flags & VAR_4))
   continue;

  if (VAR_9->offset < 0)
   VAR_10 = VAR_3 * 8 + VAR_9->offset - 32;
  else
   VAR_10 = VAR_9->offset;

  if (VAR_9->value_names != ((void*)0)) {
   uint32_t VAR_11;

   VAR_11 = FUNC_1(VAR_2, VAR_10, VAR_9->width);
   FUNC_2("%s", VAR_9->value_names[VAR_11]);
  } else if (VAR_9->width == 0) {
   FUNC_2("%s=[", VAR_9->name);
   FUNC_0((unsigned char *) VAR_2 + (VAR_10 / 8 + 4), VAR_7);
   FUNC_2("]");
  } else {
   unsigned long long VAR_12;
   int VAR_13, VAR_14;

   if ((VAR_10 & ~31) != ((VAR_10 + VAR_9->width - 1) & ~31)) {

    VAR_13 = ((VAR_10 + 31) & ~31) - VAR_10;
    VAR_14 = VAR_9->width - VAR_13;

    VAR_12 = FUNC_1(VAR_2, VAR_10, VAR_13);
    VAR_12 = (VAR_12 << VAR_14) |
     FUNC_1(VAR_2, VAR_10 + VAR_13, VAR_14);
   } else {
    VAR_12 = FUNC_1(VAR_2, VAR_10, VAR_9->width);
   }

   FUNC_2("%s=0x%0*llx", VAR_9->name, (VAR_9->width + 3) / 4, VAR_12);

   if (VAR_9->flags & VAR_0)
    VAR_7 = VAR_12;
  }

  if (VAR_8 < VAR_6->field_count - 1)
   FUNC_2(", ");
 }
}
