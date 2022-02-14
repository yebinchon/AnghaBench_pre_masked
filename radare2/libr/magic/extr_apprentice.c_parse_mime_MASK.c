
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut32 ;
struct r_magic_entry {int cont_count; struct r_magic* mp; } ;
struct r_magic {char* mimetype; char* desc; } ;
struct TYPE_5__ {int flags; } ;
typedef TYPE_1__ RMagic ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,char*,...) ;
 int FUNC_1 (TYPE_1__*,char*,char*,size_t) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (char*,char const) ;

__attribute__((used)) static int FUNC_5(RMagic *VAR_2, struct r_magic_entry **VAR_3, ut32 *VAR_4, const char *VAR_5) {
 size_t VAR_6;
 const char *VAR_7 = VAR_5;
 struct r_magic *VAR_8;
 struct r_magic_entry *VAR_9;

 if (*VAR_4 == 0) {
  FUNC_0(VAR_2, 0, "No current entry for MIME type");
  return -1;
 }

 VAR_9 = &(*VAR_3)[*VAR_4 - 1];
 VAR_8 = &VAR_9->mp[VAR_9->cont_count == 0 ? 0 : VAR_9->cont_count - 1];

 if (VAR_8->mimetype[0] != '\0') {
  FUNC_0(VAR_2, 0, "Current entry already has a MIME type: %s\n"
      "Description: %s\nNew type: %s", VAR_8->mimetype, VAR_8->desc, VAR_7);
  return -1;
 }

 VAR_0;
 for (VAR_6 = 0;
  *VAR_7 && ((FUNC_3 ((ut8)*VAR_7) && FUNC_2 ((ut8)*VAR_7)) || FUNC_4 ("-+/.", *VAR_7)) && VAR_6 < sizeof (VAR_8->mimetype);
  VAR_8->mimetype[VAR_6++] = *VAR_7++) {}
 if (VAR_6 == sizeof (VAR_8->mimetype)) {
  VAR_8->desc[sizeof (VAR_8->mimetype) - 1] = '\0';
  if (VAR_2->flags & VAR_1) {
   FUNC_1 (VAR_2, "MIME type `%s' truncated %zu",
    VAR_8->mimetype, VAR_6);
  }
 } else {
  VAR_8->mimetype[VAR_6] = '\0';
 }

 return (VAR_6>0)? 0: -1;
}
