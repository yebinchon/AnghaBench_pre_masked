
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
 int FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int const) ;
 int FUNC_4 () ;
 int FUNC_5 (int const) ;
 int FUNC_6 (int const,int const) ;
 int FUNC_7 (int const) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_10 () ;

bool FUNC_11(uint16_t VAR_2)
{
  if (VAR_1 > 0 && FUNC_1(FUNC_10(), VAR_1) >= VAR_0)
  {
    FUNC_4();
    return 1;
  }
  VAR_1 = 0;
  switch(VAR_2)
  {
    case 137:
      if (FUNC_3(136))
      {
        FUNC_8("ribution");
        FUNC_9("Center");
      }
      else if (FUNC_5(137))
      {
        FUNC_0("Corporation", "Contact");
      }
      else if(FUNC_7(137))
      {
        FUNC_8("oration");
      }
      else
      {
        FUNC_9("Corp");
      }
      break;
    case 136:
      if (FUNC_5(136))
      {
        FUNC_0("Distribution", "Distributor");
      }
      else if(FUNC_7(136))
      {
        FUNC_8("ribution");
      }
      else
      {
        FUNC_9("Dist");
      }
      break;
    case 135:
        FUNC_9("Global");
        FUNC_9("Lookup");
      break;
    case 134:
      if (FUNC_3(128))
        FUNC_9("Instance");
      else
        FUNC_9("Item");
      break;
    case 133:
      FUNC_9("NadRate");
      break;
    case 132:
      if (FUNC_6(136, 137))
      {
        FUNC_0("DistributionCenter", "DistCenter");
        FUNC_9("Pricing");
      }
      else if (FUNC_5(132))
      {
      }
      else if(FUNC_7(132))
      {
        FUNC_0("Product", "Person");
      }
      else
      {
        FUNC_9("Product");
      }
      break;
    case 131:
      FUNC_9("Darden");
      break;
    case 130:
      if (FUNC_3(128))
        if (FUNC_3(130) || FUNC_3(136))
          FUNC_9("Step");
        else
          FUNC_9("Session");
      else
        FUNC_9("Supplier");
      break;
    case 129:
      if (FUNC_3(128))
        FUNC_9("Task");
      else
        FUNC_9("Type");
      break;
    case 128:
      FUNC_9("Workflow");
      break;
  }
  FUNC_2(VAR_2);
  return 0;
}
