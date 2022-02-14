
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int zval ;
typedef int zend_string ;
struct TYPE_18__ {int flags; int type; int offset; } ;
typedef TYPE_2__ zend_property_info ;
struct TYPE_19__ {int type; int properties_info; TYPE_1__* parent; int * name; int * default_properties_table; } ;
typedef TYPE_3__ zend_class_entry ;
typedef scalar_t__ inheritance_status ;
struct TYPE_17__ {int * name; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_2__* FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,TYPE_2__*) ;
 int FUNC_7 (TYPE_3__*,TYPE_2__*,TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,TYPE_2__*) ;
 scalar_t__ FUNC_9 (TYPE_2__*,TYPE_2__*) ;
 TYPE_2__* FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (int ,char*,char*,int ,int ,...) ;
 int * FUNC_12 (int *,int *,int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static void FUNC_15(zend_property_info *VAR_9, zend_string *VAR_10, zend_class_entry *VAR_11)
{
 zval *VAR_12 = FUNC_12(&VAR_11->properties_info, VAR_10, 1);
 zend_property_info *VAR_13;

 if (FUNC_1(*VAR_12)) {
  VAR_13 = FUNC_5(VAR_12);
  if (VAR_9->flags & (VAR_5|VAR_3)) {
   VAR_13->flags |= VAR_3;
  }
  if (!(VAR_9->flags & VAR_5)) {
   if (FUNC_1((VAR_9->flags & VAR_7) != (VAR_13->flags & VAR_7))) {
    FUNC_11(VAR_0, "Cannot redeclare %s%s::$%s as %s%s::$%s",
     (VAR_9->flags & VAR_7) ? "static " : "non static ", FUNC_3(VAR_11->parent->name), FUNC_3(VAR_10),
     (VAR_13->flags & VAR_7) ? "static " : "non static ", FUNC_3(VAR_11->name), FUNC_3(VAR_10));
   }

   if (FUNC_1((VAR_13->flags & VAR_4) > (VAR_9->flags & VAR_4))) {
    FUNC_11(VAR_0, "Access level to %s::$%s must be %s (as in class %s)%s", FUNC_3(VAR_11->name), FUNC_3(VAR_10), FUNC_13(VAR_9->flags), FUNC_3(VAR_11->parent->name), (VAR_9->flags&VAR_6) ? "" : " or weaker");
   } else if ((VAR_13->flags & VAR_7) == 0) {
    int VAR_14 = FUNC_0(VAR_9->offset);
    int VAR_15 = FUNC_0(VAR_13->offset);


    FUNC_14(&(VAR_11->default_properties_table[VAR_14]));
    VAR_11->default_properties_table[VAR_14] = VAR_11->default_properties_table[VAR_15];
    FUNC_4(&VAR_11->default_properties_table[VAR_15]);
    VAR_13->offset = VAR_9->offset;
   }

   if (FUNC_1(FUNC_2(VAR_9->type))) {
    inheritance_status VAR_16 = FUNC_9(VAR_9, VAR_13);
    if (VAR_16 == VAR_1) {
     FUNC_8(VAR_13, VAR_9);
    }
    if (VAR_16 == VAR_2) {
     FUNC_7(VAR_11, VAR_13, VAR_9);
    }
   } else if (FUNC_1(FUNC_2(VAR_13->type) && !FUNC_2(VAR_9->type))) {
    FUNC_11(VAR_0,
      "Type of %s::$%s must not be defined (as in class %s)",
      FUNC_3(VAR_11->name),
      FUNC_3(VAR_10),
      FUNC_3(VAR_11->parent->name));
   }
  }
 } else {
  if (FUNC_1(VAR_11->type & VAR_8)) {
   VAR_13 = FUNC_10(VAR_9);
  } else {
   VAR_13 = VAR_9;
  }
  FUNC_6(&VAR_11->properties_info, VAR_10, VAR_13);
 }
}
